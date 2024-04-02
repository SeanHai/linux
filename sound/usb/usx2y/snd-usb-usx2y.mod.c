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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x6b310c9, "snd_free_pages" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0xaa57b065, "snd_pcm_stop_xrun" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x98129232, "snd_pcm_lib_preallocate_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x5898dcba, "snd_malloc_pages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbe5af6ef, "snd_hwdep_new" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x674ae068, "__snd_usbmidi_create" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0x926b51a9, "usb_urb_ep_type_check" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0x2428061c, "usb_get_current_frame_number" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usbmidi-lib,snd-pcm,snd,snd-hwdep";

MODULE_ALIAS("usb:v1604p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4BD1C702A9C0DBE9A6B22E1");
MODULE_INFO(rhelversion, "8.0");
