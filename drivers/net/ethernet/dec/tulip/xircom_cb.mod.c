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
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xf10de535, "ioread8" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe484e35f, "ioread32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000115Dd00000003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "80B87C9303F632D119D9B12");
MODULE_INFO(rhelversion, "8.0");
