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
	{ 0x58388972, "pv_lock_ops" },
	{ 0xd77fdbd5, "usb_get_from_anchor" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4892a57, "usb_autopm_put_interface_async" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x8d47cfd6, "usb_autopm_get_interface_async" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xfd51f909, "usb_autopm_get_interface_no_resume" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0xaa3561b0, "usb_serial_port_softint" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4C6FB1E71AB8D330F86E260");
MODULE_INFO(rhelversion, "8.0");
