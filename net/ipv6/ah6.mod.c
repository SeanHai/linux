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
	{ 0xd1c07f87, "xfrm6_find_1stfragopt" },
	{ 0xb67550ce, "xfrm6_rcv" },
	{ 0x9dabce8b, "xfrm6_protocol_deregister" },
	{ 0xab6172c, "xfrm_unregister_type" },
	{ 0xef18f7e, "xfrm6_protocol_register" },
	{ 0xb0c53c85, "xfrm_register_type" },
	{ 0x4c64aec0, "xfrm_input_resume" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0x58dd4212, "crypto_ahash_digest" },
	{ 0xd95eb0b4, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x5def83f9, "skb_push" },
	{ 0x2395715c, "skb_cow_data" },
	{ 0x98c2d757, "__xfrm_state_destroy" },
	{ 0x602e9b5b, "ip6_redirect" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x1ddf1b54, "ip6_update_pmtu" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xe5dad3af, "xfrm_state_lookup" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xefb8aead, "crypto_ahash_setkey" },
	{ 0x3246ba14, "crypto_alloc_ahash" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xcd5a6311, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C8EA3DA49797EE1D4AA7349");
MODULE_INFO(rhelversion, "8.0");
