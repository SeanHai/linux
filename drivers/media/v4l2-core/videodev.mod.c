#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x62770c6d, "cdev_alloc" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x815588a6, "clk_enable" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xdd93185a, "fwnode_handle_put" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x28cde093, "no_llseek" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x91715312, "sprintf" },
	{ 0x7ebd4be4, "trace_print_flags_seq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0xd257960c, "device_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xca0d7b63, "i2c_verify_client" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x1000e51, "schedule" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb1166309, "clk_get" },
	{ 0x85ffabba, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x49e89497, "dev_fwnode" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x91359cd8, "spi_unregister_device" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x28318305, "snprintf" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x7da99cdd, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "23FAA6C3860E08C8774B684");
MODULE_INFO(rhelversion, "8.0");
