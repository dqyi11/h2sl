# GENGETOPT FILES
set(GGOS
    grounding_demo.ggo
    grounding_set_demo.ggo
    object_demo.ggo
    region_demo.ggo
    constraint_demo.ggo
    world_demo.ggo)

# HEADER FILES
set(HDRS
    h2sl/grounding.h
    h2sl/grounding_set.h
    h2sl/object.h
    h2sl/region.h
    h2sl/constraint.h
    h2sl/spatial_function.h
    h2sl/world.h)

# QT HEADER FILES
set(QT_HDRS )

# SOURCE FILES
set(SRCS
    grounding.cc
    grounding_set.cc
    object.cc
    region.cc
    constraint.cc
    spatial_function.cc
    world.cc)

# BINARY SOURCE FILES
set(BIN_SRCS
    grounding_demo.cc
    grounding_set_demo.cc
    object_demo.cc
    region_demo.cc
    constraint_demo.cc
    world_demo.cc)

# LIBRARY DEPENDENCIES
set(DEPS h2sl-common ${LIBXML2_LIBRARIES})

# LIBRARY NAME
set(LIB h2sl-symbol)

# process the headers
process_hdrs(HDRS ${HDRS} QT_HDRS ${QT_HDRS})

# process the library
process_lib(LIB ${LIB} QT_HDRS ${QT_HDRS} SRCS ${SRCS} DEPS ${DEPS})

# process the binaries
process_bin_srcs(LIB ${LIB} BIN_SRCS ${BIN_SRCS} GGOS ${GGOS} DEPS ${DEPS})
