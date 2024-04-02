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
	{ 0x36fd4d8e, "unregister_hdlc_protocol" },
	{ 0x5024e51, "register_hdlc_protocol" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0x342be01b, "attach_hdlc_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x318f7969, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x672d3458, "linkwatch_fire_event" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa622d224, "dev_close" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0xfb578fc5, "memset" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x509f625d, "consume_skb" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0x5def83f9, "skb_push" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hdlc";


MODULE_INFO(srcversion, "CB1E030051260DD1C31DC40");
MODULE_INFO(rhelversion, "8.0");
