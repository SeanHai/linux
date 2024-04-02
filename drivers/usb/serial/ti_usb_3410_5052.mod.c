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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x2dc79562, "usb_serial_deregister_drivers" },
	{ 0x964517d1, "usb_serial_register_drivers" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xdfdcbca1, "tty_port_tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x28318305, "snprintf" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x91715312, "sprintf" },
	{ 0x199ac3d5, "usb_driver_set_configuration" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xb5200f5, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x6bc86cbe, "tty_wakeup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0451p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451pF430d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0p0319d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5152d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p505Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p505Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p4543d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p454Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p454Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A61p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A61p3420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10ACp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1151d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "79888BCA0F44B7B6032A200");
MODULE_INFO(rhelversion, "8.0");
