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
	{ 0x7e55ff56, "usb_serial_generic_tiocmiwait" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x2dc79562, "usb_serial_deregister_drivers" },
	{ 0x964517d1, "usb_serial_register_drivers" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xaa3561b0, "usb_serial_port_softint" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5200f5, "tty_encode_baud_rate" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x89cca36d, "usb_reset_configuration" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5efe00e0, "tty_hangup" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe6478472, "_dev_info" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1163p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1163p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Fp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6737p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p4101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B3A6C4F5B9C9A3BC6E2CEF9");
MODULE_INFO(rhelversion, "8.0");
