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
	{ 0x402b8281, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x7e6f662f, "dvb_usbv2_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x269d21a2, "dvb_usbv2_generic_rw_locked" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xeb572c60, "dvb_usbv2_probe" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x81c980e7, "dvb_ca_en50221_release" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x2884c68b, "dvb_usbv2_disconnect" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdc890f6b, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x28db4633, "dvb_ca_en50221_init" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0x562e270d, "dvb_usbv2_reset_resume" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,rc-core,dvb-core";

MODULE_ALIAS("usb:v04B4p861Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C73p861Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6ECE5E5FD90827EF8065703");
MODULE_INFO(rhelversion, "8.0");
