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
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x32608e68, "attach_capi_ctr" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x9f823278, "register_capi_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xfdedc137, "capi_ctr_handle_message" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0x251056eb, "capi_ctr_down" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6057c6f3, "capi_message2cmsg" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4403fcf, "unregister_capi_driver" },
	{ 0xa35e10fd, "tty_port_register_device" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc245ca28, "capi_ctr_ready" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe53f89ed, "tty_port_destroy" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x318f7969, "add_timer" },
	{ 0x373db350, "kstrtoint" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xdfdcbca1, "tty_port_tty_wakeup" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0x50b33ca4, "capi_cmsg2message" },
	{ 0xe6478472, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7523c54e, "detach_capi_ctr" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x28318305, "snprintf" },
	{ 0x509f625d, "consume_skb" },
	{ 0x60d9478a, "tty_port_tty_set" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb60e5e5f, "capi_cmsg_header" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi";


MODULE_INFO(srcversion, "FE53BCB831B7028828549F9");
MODULE_INFO(rhelversion, "8.0");
