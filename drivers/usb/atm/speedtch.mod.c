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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x4fd5932f, "param_ops_byte" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xa59c742b, "usbatm_usb_disconnect" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x69acdf38, "memcpy" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x59651a10, "usb_driver_claim_interface" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x91715312, "sprintf" },
	{ 0x46e98e19, "atm_dev_signal_change" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9c51a0c, "usb_driver_release_interface" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x3604b5df, "usb_string" },
	{ 0x27e1a049, "printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x317a8ad6, "flush_work" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xdb099315, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "830063AB5B56DA3DC21842C");
MODULE_INFO(rhelversion, "8.0");
