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
	{ 0x2dc79562, "usb_serial_deregister_drivers" },
	{ 0x964517d1, "usb_serial_register_drivers" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0x9dcc0da4, "usb_serial_handle_sysrq_char" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x528c2f3a, "usb_serial_generic_open" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xb5200f5, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x13b49f, "usb_serial_handle_dcd_change" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0x593c952b, "usb_serial_handle_break" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x48afb742, "usb_serial_generic_close" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v067Bp2303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp04BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp1234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpAAA2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpAAA8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpAAA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0609d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpE1F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0A0Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep5003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep5004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EBAp1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EBAp2080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF7p0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0584pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2478p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1453p4026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0731p0528d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p2068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F7p02DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p4027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0745p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Bp1234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B5pAC70d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E55p110Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0731p2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Fp9720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F6p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ADp0FBAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5372p2303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p3524d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0B39d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p3139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p3239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0521d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0437d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11ADp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B63p6530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B8Cp2303d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E9CFB93D120FF40B3AAEB93");
MODULE_INFO(rhelversion, "8.0");
