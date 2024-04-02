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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0x28318305, "snprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0xa35e10fd, "tty_port_register_device" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe6478472, "_dev_info" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xdfdcbca1, "tty_port_tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xe53f89ed, "tty_port_destroy" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d43bf8, "tty_port_tty_hangup" },
	{ 0x8ff84f09, "tty_standard_install" },
	{ 0x89b623c9, "tty_port_open" },
	{ 0x74ece01f, "tty_port_close" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd9507c45, "tty_port_hangup" },
	{ 0x91715312, "sprintf" },
	{ 0x27e1a049, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001931d0000000Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E5A1C278051D96BC758066A");
MODULE_INFO(rhelversion, "8.0");
