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
	{ 0x4062d575, "xfrm6_tunnel_deregister" },
	{ 0xab6172c, "xfrm_unregister_type" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x5def83f9, "skb_push" },
	{ 0x1e93f34b, "xfrm_state_flush" },
	{ 0xb0c53c85, "xfrm_register_type" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x7a3417bc, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0xf12a5455, "xfrm6_tunnel_register" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6";


MODULE_INFO(srcversion, "A6D96ACF5EFB0C79FC70E54");
MODULE_INFO(rhelversion, "8.0");
