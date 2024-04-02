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
	{ 0xea2b701b, "up_read" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0x91185511, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xe823ffd0, "snd_ctl_notify" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x248c1ce5, "snd_rawmidi_transmit_peek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x926b51a9, "usb_urb_ep_type_check" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x6f5e9786, "snd_rawmidi_transmit_ack" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfd51f909, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0x5a4e3a0b, "snd_rawmidi_transmit_empty" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd";


MODULE_INFO(srcversion, "882707BA1B74559D25E2B52");
MODULE_INFO(rhelversion, "8.0");
