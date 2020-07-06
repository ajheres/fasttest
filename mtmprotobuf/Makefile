#CDEBUG= -g
CDEBUG= -O2 -DNDEBUG
#LDEBUG=
LDEBUG= -Wl,-O1
#EDEBUG=_d

PLATFORM = x86_64-linux-gnu
TARGET   = lib/$(PLATFORM)/libmtmprotobuf$(EDEBUG).a
SRCDIR   = include
PROTODIR = mtm
AR       = ar cqs
GCC      = g++
PROTO    = protoc
CFLAGS   = -m64 -pipe -D_REENTRANT -Wall -W -fPIC -DBSD -DOS_DEBIAN9 $(CDEBUG)
LFLAGS   = -m64 -Xlinker -rpath /usr/lib/x86_64-linux-gnu $(LDEBUG)

GRPC_CPP_PLUGIN_PATH ?= `which grpc_cpp_plugin`

PROTO_FILES := $(shell find $(PROTODIR) -name "*.proto")
GRPC_FILES := $(shell ls mtm/*/service/*.proto)
PROTO_OBJS=$(patsubst $(PROTODIR)/%.pb.o,tmp/%.pb.o,$(PROTO_FILES:.proto=.pb.o))
GRPC_OBJS=$(patsubst $(PROTODIR)/%.pb.o,tmp/%.pb.o,$(GRPC_FILES:.proto=.grpc.pb.o))
OBJS=$(PROTO_OBJS) $(GRPC_OBJS)
#$(info $(GRPC_FILES))
$(info $(OBJS))
$(shell mkdir -p include tmp/alert/model tmp/event/action tmp/geo/model tmp/geo/messages tmp/geo/service)
 
# make library
all: $(TARGET)
 
# make library from object files
$(TARGET) : $(OBJS)
	@test -d lib/$(PLATFORM) || mkdir -p lib/$(PLATFORM)
	$(AR) $(TARGET) $(OBJS)
 
# object files are compiled from source files
tmp/%.o: $(SRCDIR)/$(PROTODIR)/%.cc
	$(GCC) -I$(SRCDIR) -c $(CFLAGS) -o $@ $<

# source files are compiled from proto files with grpc plugin: /usr/bin/grpc_cpp_plugin
$(SRCDIR)/%.grpc.pb.cc: $(PROTODIR)/%.proto
	$(PROTO) --grpc_out=$(SRCDIR) --plugin=protoc-gen-grpc=$(GRPC_CPP_PLUGIN_PATH) $^
 
# source files are compiled from proto files
$(SRCDIR)/%.pb.cc: $(PROTODIR)/%.proto
	$(PROTO) --cpp_out=$(SRCDIR) $^
 
clean:
	rm -f $(TARGET) $(OBJS)

protosrc:
	$(PROTO) --cpp_out=$(SRCDIR) $(PROTO_FILES)
	$(PROTO) --grpc_out=$(SRCDIR) --plugin=protoc-gen-grpc=$(GRPC_CPP_PLUGIN_PATH) $(GRPC_FILES)

