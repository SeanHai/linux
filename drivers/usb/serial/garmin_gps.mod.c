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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x2dc79562, "usb_serial_deregister_drivers" },
	{ 0x964517d1, "usb_serial_register_drivers" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaa3561b0, "usb_serial_port_softint" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v091Ep0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E8D2AA771D471CE65ADBEC6");
MODULE_INFO(rhelversion, "8.0");
