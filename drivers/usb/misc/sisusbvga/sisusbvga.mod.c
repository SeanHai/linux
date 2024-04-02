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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x75e633d1, "vc_resize" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xd64657ae, "usb_deregister_dev" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x119e82f4, "vc_cons" },
	{ 0xc631580a, "console_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xf7584a9c, "find_font" },
	{ 0x1b14622e, "no_seek_end_llseek" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x79f91166, "usb_register_dev" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x15247c7a, "vc_scrolldelta_helper" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x689109f0, "do_take_over_console" },
	{ 0x4ddaa140, "usb_find_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xb0e602eb, "memmove" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd8b7cd73, "con_set_default_unimap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0711p0550d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0918d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0920d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p5200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp0269d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1BCBD19F4B7EC08E67D5BB9");
MODULE_INFO(rhelversion, "8.0");
