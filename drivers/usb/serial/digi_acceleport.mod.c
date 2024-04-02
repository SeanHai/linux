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
	{ 0x2dc79562, "usb_serial_deregister_drivers" },
	{ 0x964517d1, "usb_serial_register_drivers" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x27e1a049, "printk" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb5200f5, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf7d6636f, "current_task" },
	{ 0x37a0cba, "kfree" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xdfdcbca1, "tty_port_tty_wakeup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05C5p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C5p0004d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "21D434AB90A20B87FA88E7C");
MODULE_INFO(rhelversion, "8.0");
