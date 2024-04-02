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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5a590fc3, "dvb_usb_device_exit" },
	{ 0x670815b8, "dvb_usb_device_init" },
	{ 0x687d25a8, "dibusb_pid_filter" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x33fb034b, "dibusb_dib3000mc_frontend_attach" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x2c3b8933, "dibusb_dib3000mc_tuner_attach" },
	{ 0xc71c201e, "dibusb2_0_streaming_ctrl" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x1efdb1ca, "dibusb_i2c_algo" },
	{ 0xe9d9e490, "dibusb_pid_filter_ctrl" },
	{ 0xb9afc0f3, "rc_repeat" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb,dvb-usb-dibusb-common,rc-core,dvb-usb-dibusb-mc-common";

MODULE_ALIAS("usb:v07CApA800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA801d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "68F2879440828927B0FFD66");
MODULE_INFO(rhelversion, "8.0");
