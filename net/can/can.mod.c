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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x3114074c, "sock_init_data" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x41715c18, "seq_puts" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xee7bb8d8, "proc_create_net_single" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa99ad2af, "sock_get_timestamp" },
	{ 0xaaedeaed, "PDE_DATA" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xce2254bd, "sock_efree" },
	{ 0xfca44c56, "netif_rx_ni" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0x27e1a049, "printk" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6edf4a5a, "proc_mkdir_data" },
	{ 0xa592a1a, "sk_free" },
	{ 0x552c4aaf, "dev_remove_pack" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xcd45ab23, "proto_register" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xa80c15d5, "sock_register" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3490f9db, "dev_add_pack" },
	{ 0x509f625d, "consume_skb" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7DEF019C73B92E5826A8930");
MODULE_INFO(rhelversion, "8.0");
