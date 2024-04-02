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
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x5a8f5b23, "usb_init_urb" },
	{ 0x2bc59db0, "snd_pcm_hw_constraint_msbits" },
	{ 0xaa57b065, "snd_pcm_stop_xrun" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xf7c28002, "snd_card_free_when_closed" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8185c800, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x59651a10, "usb_driver_claim_interface" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x674ae068, "__snd_usbmidi_create" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x4ff23c91, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9c51a0c, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x28318305, "snprintf" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xcb0e9def, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usbmidi-lib,snd-pcm,snd";

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A25D3079F26105FCFAC51C2");
MODULE_INFO(rhelversion, "8.0");
