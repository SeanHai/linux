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
	{ 0x438781aa, "line6_version_request_async" },
	{ 0x1d4c7f5f, "line6_resume" },
	{ 0xd8f68feb, "line6_probe" },
	{ 0xfdf4b28e, "line6_alloc_sysex_buffer" },
	{ 0x3ae09578, "line6_init_midi" },
	{ 0x216ac462, "line6_disconnect" },
	{ 0x7e936b73, "line6_send_sysex_message" },
	{ 0x388f9bb4, "line6_start_timer" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x202a1b1b, "line6_midi_id" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0xdf89412f, "snd_card_add_dev_attr" },
	{ 0xca2e0708, "line6_init_pcm" },
	{ 0xf5d7f170, "line6_suspend" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x121da905, "queue_work_on" },
	{ 0xae307d4b, "snd_ctl_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6,snd";

MODULE_ALIAS("usb:v0E41p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4252d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5051d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p5044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p5050d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4A6A9BA41558A644ED22A7F");
MODULE_INFO(rhelversion, "8.0");
