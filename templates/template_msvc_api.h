#ifndef ${target_id}_TEMPLATE_API_H
#define ${target_id}_TEMPLATE_API_H

#include <${ASAP_LIB_EXPORT_NAME}/${_NAME}_export.h>

#ifdef ${target_id}_STATIC_DEFINE
#  define ${target_id}_TEMPLATE_API
#else
#  ifndef ${target_id}_TEMPLATE_API
#    ifdef ${target_id}_EXPORTS
        /* We are building this library */
#      define ${target_id}_TEMPLATE_API
#    else
        /* We are using this library */
#      define ${target_id}_TEMPLATE_API
#    endif
#  endif

#endif

#endif