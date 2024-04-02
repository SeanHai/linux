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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x85142f62, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9ba71a68, "__rtnl_link_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x4f4033b9, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x65baf559, "down_write" },
	{ 0x5e94afdd, "pernet_ops_rwsem" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0xdfa89d8, "skb_pull_rcsum" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0xf13b1dfb, "dev_get_by_index_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x509f625d, "consume_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "921E9A043B15DFBFEDF2E01");
MODULE_INFO(rhelversion, "8.0");
