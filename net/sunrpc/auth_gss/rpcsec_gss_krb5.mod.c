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
	{ 0xb7e2662, "crypto_alloc_skcipher" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0xec2580fd, "crypto_alloc_shash" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x552fd5de, "write_bytes_to_xdr_buf" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf54bd49b, "lcm" },
	{ 0xc9d491c9, "gss_mech_register" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0xd23084bc, "crypto_ahash_final" },
	{ 0x58dd4212, "crypto_ahash_digest" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x608544bf, "xdr_buf_subsegment" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0xfb578fc5, "memset" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe03ffb92, "crypto_shash_digest" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x2766382f, "crypto_shash_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3f23482a, "gss_mech_unregister" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xefb8aead, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xe734c163, "read_bytes_from_xdr_buf" },
	{ 0xf006bee8, "xdr_process_buf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0x32ad3078, "xdr_buf_trim" },
	{ 0x3246ba14, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=auth_rpcgss,sunrpc";


MODULE_INFO(srcversion, "A3F4BE0E74C70DF079CA2BA");
MODULE_INFO(rhelversion, "8.0");
