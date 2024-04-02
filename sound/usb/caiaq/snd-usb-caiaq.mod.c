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
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x5a8f5b23, "usb_init_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xfe7843b, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3604b5df, "usb_string" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8185c800, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xc9e4d988, "snd_card_set_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x926b51a9, "usb_urb_ep_type_check" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x4ff23c91, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x113759a6, "snd_pcm_limit_hw_rates" },
	{ 0x28318305, "snprintf" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xcb0e9def, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-rawmidi,snd";

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ACD69AA1DB177F2D7C8DA32");
MODULE_INFO(rhelversion, "8.0");
