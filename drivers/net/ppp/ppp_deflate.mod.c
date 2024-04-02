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
	{ 0x4a56b5c1, "ppp_unregister_compressor" },
	{ 0xe401a1b1, "ppp_register_compressor" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x424d3620, "zlib_inflateIncomp" },
	{ 0x6aeefac4, "zlib_deflateReset" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "3DA3EFBA0F967473FCB30E0");
MODULE_INFO(rhelversion, "8.0");
