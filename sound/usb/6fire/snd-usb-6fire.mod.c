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
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x5a8f5b23, "usb_init_urb" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xaa57b065, "snd_pcm_stop_xrun" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0x9cb46dce, "_snd_ctl_add_slave" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x59427e5b, "snd_ctl_boolean_stereo_info" },
	{ 0xf7c28002, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8185c800, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xb06a1340, "usb_poison_urb" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x80f21e2b, "snd_ctl_make_virtual_master" },
	{ 0x4ff23c91, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb04c82e9, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xcb0e9def, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-rawmidi,snd";

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4559982427B1F265A8A6163");
MODULE_INFO(rhelversion, "8.0");
