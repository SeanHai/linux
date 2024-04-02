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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa35e10fd, "tty_port_register_device" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xd9d43bf8, "tty_port_tty_hangup" },
	{ 0x29361773, "complete" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x61a1d47b, "do_SAK" },
	{ 0x5efe00e0, "tty_hangup" },
	{ 0x89c28c12, "tty_schedule_flip" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0x52f8c71b, "tty_buffer_request_room" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x60d9478a, "tty_port_tty_set" },
	{ 0x30fe5ff1, "tty_port_block_til_ready" },
	{ 0x8ccd8870, "tty_port_raise_dtr_rts" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xd9507c45, "tty_port_hangup" },
	{ 0x6bc86cbe, "tty_wakeup" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xdbddd4e2, "tty_port_lower_dtr_rts" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74ece01f, "tty_port_close" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0xf571822b, "tty_ldisc_deref" },
	{ 0x58e9905f, "tty_ldisc_ref" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0x41715c18, "seq_puts" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xe53f89ed, "tty_port_destroy" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x27e1a049, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000120Ed00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1E1AFCEF63A474F819B61F1");
MODULE_INFO(rhelversion, "8.0");
