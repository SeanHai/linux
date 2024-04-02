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
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0xf7c28002, "snd_card_free_when_closed" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x926b51a9, "usb_urb_ep_type_check" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x28318305, "snprintf" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd";

MODULE_ALIAS("usb:v1397p00BDd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DDDF116A6E68D369F4F9248");
MODULE_INFO(rhelversion, "8.0");
