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
	{ 0x405c1144, "get_seconds" },
	{ 0x1d4c7f5f, "line6_resume" },
	{ 0xd8f68feb, "line6_probe" },
	{ 0x66a110a0, "line6_write_data" },
	{ 0x216ac462, "line6_disconnect" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd06426bf, "line6_pcm_release" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a91af4d, "line6_pcm_acquire" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xca2e0708, "line6_init_pcm" },
	{ 0xf5d7f170, "line6_suspend" },
	{ 0x3a4a6a85, "line6_read_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x28318305, "snprintf" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6,snd";

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "0EC0057D2D713CAA614E59C");
MODULE_INFO(rhelversion, "8.0");
