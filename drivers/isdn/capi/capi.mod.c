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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x28cde093, "no_llseek" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0xa047947, "class_destroy" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x2df52479, "device_create" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdfdcbca1, "tty_port_tty_wakeup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xa35e10fd, "tty_port_register_device" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x8ff84f09, "tty_standard_install" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x240decb7, "capi20_release" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0x98004e1a, "tty_vhangup" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x30f114de, "capi20_register" },
	{ 0x32aa05f2, "capi20_isinstalled" },
	{ 0x6fc65d87, "capi20_get_version" },
	{ 0x4bbf47d3, "capi20_get_profile" },
	{ 0xc42d9ec1, "capi20_manufacturer" },
	{ 0xc6cbbc89, "capable" },
	{ 0x904907ba, "capi20_get_serial" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6be7a92b, "capi20_get_manufacturer" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x89b623c9, "tty_port_open" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0xf571822b, "tty_ldisc_deref" },
	{ 0x58e9905f, "tty_ldisc_ref" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x74ece01f, "tty_port_close" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd9507c45, "tty_port_hangup" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x27e1a049, "printk" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xdd77d61b, "capi20_put_message" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5def83f9, "skb_push" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x982191fd, "tty_port_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi";


MODULE_INFO(srcversion, "CDB233C37F025590109EF4D");
MODULE_INFO(rhelversion, "8.0");
