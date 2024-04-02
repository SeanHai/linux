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
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xae127601, "uwb_rc_add" },
	{ 0xcf5d91a1, "usb_get_intf" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x19de6621, "uwb_rc_alloc" },
	{ 0x841b74b, "uwb_rc_reset_all" },
	{ 0x62f7e7d8, "uwb_rc_neh_error" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5776004c, "uwb_rc_neh_grok" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xa3294ca4, "usb_lock_device_for_reset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xb43a245f, "uwb_rc_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xe0024da3, "usb_put_intf" },
	{ 0xa479db2f, "uwb_rc_rm" },
	{ 0xbed06245, "uwb_rc_pre_reset" },
	{ 0x4f6cd70f, "uwb_rc_post_reset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb";

MODULE_ALIAS("usb:v07D1p3D02d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip02in*");

MODULE_INFO(srcversion, "511A3475D603B4479CE8899");
MODULE_INFO(rhelversion, "8.0");
