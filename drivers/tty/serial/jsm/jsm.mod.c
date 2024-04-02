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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xeadcba7d, "uart_write_wakeup" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x404ccea5, "uart_add_one_port" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x80003b3d, "uart_unregister_driver" },
	{ 0x52f8c71b, "tty_buffer_request_room" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8e164a24, "uart_remove_one_port" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe6478472, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5f7dbf0b, "uart_handle_dcd_change" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf2840f8f, "uart_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000114Fd000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd000000D1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1E7721254B606A8AA3F2632");
MODULE_INFO(rhelversion, "8.0");
