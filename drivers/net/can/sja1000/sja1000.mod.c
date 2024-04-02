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
	{ 0x38a7735c, "netdev_info" },
	{ 0xf025b47f, "register_candev" },
	{ 0xc89e39b4, "alloc_can_err_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7a5f31b0, "alloc_candev" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xc9df2273, "can_bus_off" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x2a661171, "close_candev" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x54852f01, "can_led_event" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd4f59b29, "free_candev" },
	{ 0xc89d1d60, "can_change_mtu" },
	{ 0xca6d3474, "can_change_state" },
	{ 0xf63ba7e9, "unregister_candev" },
	{ 0xa13b3006, "alloc_can_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x8972397, "open_candev" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x9ef0e17e, "devm_can_led_init" },
	{ 0xb731ac23, "can_get_echo_skb" },
	{ 0xe9da2271, "can_put_echo_skb" },
	{ 0xd7862824, "can_free_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";


MODULE_INFO(srcversion, "1ABD1673B7AD907210ABCBF");
MODULE_INFO(rhelversion, "8.0");
