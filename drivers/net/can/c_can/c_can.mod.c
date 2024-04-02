#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xf025b47f, "register_candev" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0xc89e39b4, "alloc_can_err_skb" },
	{ 0xc25438e, "pinctrl_select_state" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x7a5f31b0, "alloc_candev" },
	{ 0x466d12a0, "pinctrl_lookup_state" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xc9df2273, "can_bus_off" },
	{ 0x7e44d869, "pinctrl_get" },
	{ 0x2a661171, "close_candev" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x54852f01, "can_led_event" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd4f59b29, "free_candev" },
	{ 0x1afdfa9b, "pinctrl_pm_select_sleep_state" },
	{ 0xf7bd8d61, "pinctrl_put" },
	{ 0xc89d1d60, "can_change_mtu" },
	{ 0xf63ba7e9, "unregister_candev" },
	{ 0xa13b3006, "alloc_can_skb" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x149d623, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x8972397, "open_candev" },
	{ 0x9ef0e17e, "devm_can_led_init" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb731ac23, "can_get_echo_skb" },
	{ 0xe9da2271, "can_put_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";


MODULE_INFO(srcversion, "2084F91F058625A0BF89017");
MODULE_INFO(rhelversion, "8.0");
