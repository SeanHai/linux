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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x28318305, "snprintf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0x27e1a049, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp9218d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9219d*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp921Cd*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp921Dd*dc*dsc*dp*ic03isc*ip00in*");
MODULE_ALIAS("usb:v05ACp9236d*dc*dsc*dp*ic03isc*ip00in*");

MODULE_INFO(srcversion, "DBF006804A70F79DB4D3271");
MODULE_INFO(rhelversion, "8.0");
