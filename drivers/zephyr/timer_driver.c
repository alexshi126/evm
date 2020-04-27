#include "nevm.h"

#define ARG_LENGTH_ERR { evm_set_err(e, ec_type, "invalid argument length");return evm_mk_undefined(); }
#define ARG_TYPE_ERR   { evm_set_err(e, ec_type, "invalid argument type");return evm_mk_undefined(); }

evm_val_t nevm_driver_timer_config(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_timer_init(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_timer_deinit(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_timer_start(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

evm_val_t nevm_driver_timer_stop(evm_t * e, evm_val_t * p, int argc, evm_val_t * v){
    (void)p;
    return EVM_VAL_UNDEFINED;
}

