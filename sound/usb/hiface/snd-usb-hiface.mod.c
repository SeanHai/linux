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
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x5a8f5b23, "usb_init_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xf7c28002, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8185c800, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x926b51a9, "usb_urb_ep_type_check" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x4ff23c91, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x28318305, "snprintf" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xcb0e9def, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x482f8924, "usb_anchor_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";

MODULE_ALIAS("usb:v04B4p0384d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p930Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp932Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v245Fp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v25C6p9002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "50C9C3DBF94A1D74954E954");
MODULE_INFO(rhelversion, "8.0");
