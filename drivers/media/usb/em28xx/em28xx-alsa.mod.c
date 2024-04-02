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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x338b1fd9, "em28xx_register_extension" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xc0cada8, "snd_pcm_stream_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xf75da60b, "snd_pcm_hw_constraint_integer" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0xb1d64a6d, "em28xx_read_ac97" },
	{ 0xfb578fc5, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xb80f4915, "em28xx_write_ac97" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xe3598ce1, "em28xx_unregister_extension" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8478ce21, "snd_pcm_stream_unlock" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x121da905, "queue_work_on" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0xc47b8a24, "em28xx_audio_analog_set" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,snd-pcm,snd";


MODULE_INFO(srcversion, "F3469F80D7B2238B1D14BDE");
MODULE_INFO(rhelversion, "8.0");
