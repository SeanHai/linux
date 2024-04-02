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
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x28318305, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91620a5e, "ir_raw_event_store" },
	{ 0x534ad7af, "ir_raw_event_handle" },
	{ 0x96c3c8b, "ir_raw_event_store_with_filter" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("usb:v1781p0938d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "68464DAAE97F74F64236EE7");
MODULE_INFO(rhelversion, "8.0");
