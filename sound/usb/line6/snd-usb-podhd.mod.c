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
	{ 0xbd8173d3, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1d4c7f5f, "line6_resume" },
	{ 0xd8f68feb, "line6_probe" },
	{ 0x216ac462, "line6_disconnect" },
	{ 0x388f9bb4, "line6_start_timer" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x59651a10, "usb_driver_claim_interface" },
	{ 0xdf89412f, "snd_card_add_dev_attr" },
	{ 0xca2e0708, "line6_init_pcm" },
	{ 0xf5d7f170, "line6_suspend" },
	{ 0x3a4a6a85, "line6_read_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb9c51a0c, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x121da905, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6,snd";

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p414Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4159d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4156d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "B337A006910915FF68BE038");
MODULE_INFO(rhelversion, "8.0");
