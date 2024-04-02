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
	{ 0x964d7782, "usb_serial_generic_get_icount" },
	{ 0x7e55ff56, "usb_serial_generic_tiocmiwait" },
	{ 0x2dc79562, "usb_serial_deregister_drivers" },
	{ 0x964517d1, "usb_serial_register_drivers" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xaa3561b0, "usb_serial_port_softint" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v061DpC120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC1A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061DpC180d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5400EB7668335C867ECA42D");
MODULE_INFO(rhelversion, "8.0");
