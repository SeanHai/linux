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
	{ 0x7888a491, "usb_serial_generic_unthrottle" },
	{ 0x2fa66516, "usb_serial_generic_throttle" },
	{ 0x2dc79562, "usb_serial_deregister_drivers" },
	{ 0x964517d1, "usb_serial_register_drivers" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x528c2f3a, "usb_serial_generic_open" },
	{ 0x48afb742, "usb_serial_generic_close" },
	{ 0xf811640a, "ezusb_fx1_ihex_firmware_download" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe6478472, "_dev_info" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xb5200f5, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ezusb";

MODULE_ALIAS("usb:v0710p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0710p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B243725B42DDC252C8B9F17");
MODULE_INFO(rhelversion, "8.0");
