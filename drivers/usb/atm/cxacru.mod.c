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
	{ 0xa59c742b, "usbatm_usb_disconnect" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xfb578fc5, "memset" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x46e98e19, "atm_dev_signal_change" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x91715312, "sprintf" },
	{ 0x29361773, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc6cbbc89, "capable" },
	{ 0x754d539c, "strlen" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x28318305, "snprintf" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe6478472, "_dev_info" },
	{ 0x3604b5df, "usb_string" },
	{ 0xdb099315, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v0572pCAFEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p3457d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1803p5510d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0659p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0509p0812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100DpCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp3342d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0737211E76EE842C4B04EAD");
MODULE_INFO(rhelversion, "8.0");
