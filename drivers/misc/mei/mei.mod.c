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
	{ 0x2d3385d3, "system_wq" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6a8db397, "cdev_init" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0xea2b701b, "up_read" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x754d539c, "strlen" },
	{ 0x89e66458, "device_release_driver" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0x28cde093, "no_llseek" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xa3503a5e, "device_create_with_groups" },
	{ 0x91715312, "sprintf" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x91185511, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x91018733, "device_del" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x787b953, "idr_alloc" },
	{ 0xcca62a76, "device_add" },
	{ 0x9a910d01, "simple_open" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xe6478472, "_dev_info" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xd0c86c05, "put_device" },
	{ 0xa4a737cd, "debugfs_write_file_bool" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0x3b7c7610, "debugfs_read_file_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x85ffabba, "get_device" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x551be51f, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xa047947, "class_destroy" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x6839a855, "bpf_trace_run4" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "72AE4129365C1CE3CF7647E");
MODULE_INFO(rhelversion, "8.0");
