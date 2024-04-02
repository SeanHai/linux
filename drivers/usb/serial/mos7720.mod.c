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
	{ 0xa274f52b, "parport_ieee1284_read_byte" },
	{ 0x1323d580, "parport_ieee1284_read_nibble" },
	{ 0x2dc79562, "usb_serial_deregister_drivers" },
	{ 0x964517d1, "usb_serial_register_drivers" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf4a05c0e, "parport_del_port" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xcaba6cc4, "parport_remove_port" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x29361773, "complete" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb683a3ad, "parport_announce_port" },
	{ 0x6259c6f1, "parport_register_port" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xdfdcbca1, "tty_port_tty_wakeup" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb5200f5, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

MODULE_ALIAS("usb:v9710p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7715d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "648CA7F0EBBC520BD3582ED");
MODULE_INFO(rhelversion, "8.0");
