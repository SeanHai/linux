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
	{ 0x528c2f3a, "usb_serial_generic_open" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xaa3561b0, "usb_serial_port_softint" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v065Ap0009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E699503ADD3D3590E431FCB");
MODULE_INFO(rhelversion, "8.0");
