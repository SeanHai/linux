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
	{ 0x2d3385d3, "system_wq" },
	{ 0x438781aa, "line6_version_request_async" },
	{ 0x1d4c7f5f, "line6_resume" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xd8f68feb, "line6_probe" },
	{ 0x3ae09578, "line6_init_midi" },
	{ 0x216ac462, "line6_disconnect" },
	{ 0x388f9bb4, "line6_start_timer" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0xf5d7f170, "line6_suspend" },
	{ 0xe6478472, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd2abf66a, "line6_send_raw_message_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x121da905, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6,snd";

MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p534Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0869279352975933A8C1F89");
MODULE_INFO(rhelversion, "8.0");
