#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7846af3e, "__kfifo_len_r" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x2484adc3, "__kfifo_to_user_r" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0xa494c6eb, "snd_pcm_suspend_all" },
	{ 0xc6cb465a, "__kfifo_max_r" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x6ce26bec, "snd_pcm_set_ops" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xf7c28002, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x248c1ce5, "snd_rawmidi_transmit_peek" },
	{ 0xbe5af6ef, "snd_hwdep_new" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x926b51a9, "usb_urb_ep_type_check" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xe7a4a828, "snd_pcm_hw_constraint_ratdens" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x6f5e9786, "snd_rawmidi_transmit_ack" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb04c82e9, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8323ab26, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-rawmidi,snd,snd-hwdep";


MODULE_INFO(srcversion, "29D8F69F4892C7B0D95C453");
MODULE_INFO(rhelversion, "8.0");
