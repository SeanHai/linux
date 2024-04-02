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
	{ 0x2d3385d3, "system_wq" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x1495ef, "led_trigger_event" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xf46aaa47, "devres_alloc_node" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xce2254bd, "sock_efree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xd03ba39a, "devres_add" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe6ceed91, "led_trigger_unregister_simple" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x9b6fde52, "led_trigger_rename_static" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x3a05ef87, "led_trigger_register_simple" },
	{ 0x6ebfb52e, "led_trigger_blink_oneshot" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x28318305, "snprintf" },
	{ 0x509f625d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xc054ebe3, "param_ops_ulong" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2B15999038135630E51C8DE");
MODULE_INFO(rhelversion, "8.0");
